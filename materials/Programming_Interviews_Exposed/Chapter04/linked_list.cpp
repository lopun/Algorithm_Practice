// singly-linked list with class
class IntElement {
  public:
    IntElement( int value ): next( NULL ), data(value) {}
    ~IntElement() {}

    IntElement *getNext() const { return next; }
    int value() const {return data;}
    void setNext( IntElement *elem ) {next = elem;}
    void setValue(int value){ data = value; }

  private:
    IntElement *next;
    int data;
}

// singly-linked list with template
template <class T>
class ListElement {
  public:
    ListElement( const T &value): next(NULL), data(value) {}
    ~ListElement() {}

    ListElement *getNext() const { return next;}
    const T& value() const { return data; }
    void setNext( ListElement *elem ) {next = elem;}
    void setValue( const T &value) {data = value;}

  private:
    ListElement *next;
    T data;
}