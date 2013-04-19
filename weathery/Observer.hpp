namespace weathery {

struct Observer {
    virtual void update() = 0;
    virtual ~Observer();
};

}
