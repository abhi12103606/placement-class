class Foo {
public:
    bool f = false;
    bool s = false;
    Foo() {
        
    }

    void first(function<void()> printFirst) {
        
        printFirst();
        f = true;
    }

    void second(function<void()> printSecond) {
        
        while(!f){
            sleep(0.001);
        }
        printSecond();
        s = true;
    }

    void third(function<void()> printThird) {
        
        while(!s){
            sleep(0.001);
        }
        printThird();
    }
};