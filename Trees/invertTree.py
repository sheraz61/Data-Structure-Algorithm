class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

    def invertTree(self):
        if self is None:  
            return None
        # swap child 
        self.left, self.right = self.right, self.left  
        if self.left:
            self.left.invertTree()
        if self.right:
            self.right.invertTree()
        return self  
# Build the tree
root = TreeNode(4)
root.left = TreeNode(2)
root.right = TreeNode(7)
root.left.left = TreeNode(1)
root.left.right = TreeNode(3)
root.right.left = TreeNode(6)
root.right.right = TreeNode(9)

# Invert the tree
inverted_root = root.invertTree()  # Call invertTree on root

# Print results
print(inverted_root.val)  
print(inverted_root.left.val)  
print(inverted_root.right.val)  
