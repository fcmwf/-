#include <base.h>
#include <dev-mmio.h>

void __timer_init() {
}

void __timer_uptime(DEV_TIMER_UPTIME_T *uptime) {
  // Lab6 TODO: implement uptime MMIO
  // hint: use function `inl` and RTC_ADDR to access RTC MMIO
  uint64_t low,high;
  low  = inl(RTC_ADDR);
  high = inl(RTC_ADDR+4);
  uptime->us = (uint64_t)((high<<32)+ low);
}

void __timer_rtc(DEV_TIMER_RTC_T *rtc) {
  // Lab6 TODO: implement RTC MMIO
  // hint: use function `inl` and RTC_ADDR with offset  to access RTC MMIO
  rtc->second=inl(RTC_ADDR+8);
  rtc->minute=inl(RTC_ADDR+12);
  rtc->hour=inl(RTC_ADDR+16);
  rtc->day=inl(RTC_ADDR+20);
  rtc->month=inl(RTC_ADDR+24);
  rtc->year=inl(RTC_ADDR+28);
}