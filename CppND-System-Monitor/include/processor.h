#ifndef PROCESSOR_H
#define PROCESSOR_H

class Processor {
 public:
  // TODO: See src/processor.cpp
  float Utilization();
  long CurrentTotal();
  long CurrentActive();
  long CurrentIdle();

  long PrevTotal();
  long PrevIdle();
  long PrevActive();
  void Update(long idle, long active, long total);
  // TODO: Declare any necessary private members
 private:
  long m_idle;
  long m_active;
  long m_total;
};

#endif