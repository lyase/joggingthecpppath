#include "Observer.hpp"
#include "Subject.hpp"

namespace weathery {

Observer::Observer(Subject& subject) : subject(subject)
{
     subject.registerObserver(this);
}

Observer::~Observer()
{
     subject.removeObserver(this);
}

}
