int FolderSize;
typedef struct treeNode {
    int size;
    struct treeNode* left;
    struct treeNode* right;
} treeNode;

treeNode* makeRootNde (int size, treeNode* leftNode, treeNode* rightNode);
int postorder_FolderSize(treeNode* root);
