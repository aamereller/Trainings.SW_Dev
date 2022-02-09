#ifndef SHARED_POINTERS_H
#define SHARED_POINTERS_H

#include <memory>

namespace training2
{
    class SharedClass;
    std::shared_ptr<SharedClass> SharedClass_p;
    std::shared_ptr<const SharedClass> SharedClass_c;

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
}

#endif //SHARED_POINTERS_H
