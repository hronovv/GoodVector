#ifndef TASK5_PAIR_H
#define TASK5_PAIR_H


template <typename T1, typename T2>
struct GoodPair {
    T1 first;
    T2 second;

    GoodPair() = default;


    GoodPair(T1 a, T2 b) {
        this->first = a;
        this->second = b;
    }  // indexation

    GoodPair& operator=(GoodPair const& pair_) {
      first = pair_.first;
      second = pair_.second;
      return *this;
    }
};
#endif
