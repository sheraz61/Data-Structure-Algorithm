class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
    def isUnivalTree(self, root):
        if not root:
            return True
        if root.right:
            if root.val!=root.right.val:
                return False
        if root.left:
            if root.val!=root.left.val:
                return False
        return self.isUnivalTree(root.right) and self.isUnivalTree(root.left)
# Build the tree
root = TreeNode(1)
root.left = TreeNode(1)
root.right = TreeNode(2)
# Test the function
print(root.isUnivalTree(root))  # True