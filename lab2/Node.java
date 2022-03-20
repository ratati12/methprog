import java.util.Comparator;

public class Node<K extends Comparable, V extends Comparable> implements Comparator<Node>
{
    private K key;
    private V value;
    private int height;
    private Node<K, V> left;
    private Node<K, V> right;
    private Node<K, V> parent;

    Node(K key, V value)
    {
        this.key = key;
        this.value = value;
    }

    public void setKey(K key)
    {
        this.key = key;
    }
    public int getHeight() 
    { 
        return height;
    }
    public void setHeight(int height)
    {
        this.height = height;
    }
    public void setParent(Node<K, V> parent)
    {
        this.parent = parent;
    }
    public K getKey() 
    { 
        return key;
    }
    public V getValue() 
    {
        return value;
    }
    public Node<K, V> getParent() 
    {
        return parent;
    }
    public Node<K, V> getLeft()
    {
        return left;
    }
    public void setLeft(Node<K, V> left)
    {
        this.left = left;
    } 
    public Node<K, V> getRight()
    {
        return right;
    }
    public void setRight(Node<K, V> right)
    {
        this.right = right;
    }

    @Override
    public int compare(Node o1, Node o2)
    {
        return o1.getValue().compareTo(o2.getValue());
    }
}
