#ifndef SHARED_POINTERS_H
#define SHARED_POINTERS_H

#include <memory>

namespace training2
{
    class SharedClass;
    typename std::shared_ptr<SharedClass> SharedClass_p;
    typename std::shared_ptr<const SharedClass> SharedClass_c;

    class SharedClass
    {
        private:
        std::weak_ptr<SharedClass> self_p;
        std::weak_ptr<const SharedClass> self_c;

        public:
        SharedClass();
        virtual ~SharedClass();
        static SharedClass_p create();
        SharedClass_p operator=(SharedClass_p _obj);

        SharedClass_p self();
    };

    void methid()
    {
        SharedClass *raw = new SharedClass();
        SharedClass_p ptr(raw);
        SharedClass_p ptr2(ptr);
        SharedClass_p ptr3(raw);
        ..
        
    }
}

#endif //SHARED_POINTERS_H
