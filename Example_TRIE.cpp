#include <iostream>
#include <string>

using namespace std;

const int ALPHABET_SIZE = 26;

// Structura pentru nodul din trie
struct TrieNode {
    bool isEndOfWord;
    TrieNode* children[ALPHABET_SIZE];
};

// Funcție pentru creare nod nou
TrieNode* createNode() {
    TrieNode* node = new TrieNode;
    node->isEndOfWord = false;
    for (int i = 0; i < ALPHABET_SIZE; i++)
        node->children[i] = nullptr;
    return node;
}

// Funcție pentru inserarea unui cuvânt în trie
void insert(TrieNode* root, const string &key) {
    TrieNode* current = root;
    for (char c : key) {
        int index = c - 'a';  // presupunem că toate literele sunt mici
        if (current->children[index] == nullptr) {
            current->children[index] = createNode();
        }
        current = current->children[index];
    }
    current->isEndOfWord = true;
}

// Funcție pentru căutarea unui cuvânt în trie
bool search(TrieNode* root, const string &key) {
    TrieNode* current = root;
    for (char c : key) {
        int index = c - 'a';
        if (current->children[index] == nullptr)
            return false;
        current = current->children[index];
    }
    return current != nullptr && current->isEndOfWord;
}

int main() {
    // Creăm nodul rădăcină
    TrieNode* root = createNode();

    // Inserăm câteva cuvinte
    insert(root, "test");
    insert(root, "trie");
    insert(root, "arbori");
    insert(root, "exemplu");

    // Căutăm cuvinte în trie
    cout << "Cautare pentru 'test': " << (search(root, "test") ? "Gasit" : "Negasit") << endl;
    cout << "Cautare pentru 'trie': " << (search(root, "trie") ? "Gasit" : "Negasit") << endl;
    cout << "Cautare pentru 'arbori': " << (search(root, "arbori") ? "Gasit" : "Negasit") << endl;
    cout << "Cautare pentru 'exemplu': " << (search(root, "exemplu") ? "Gasit" : "Negasit") << endl;

    return 0;
}
