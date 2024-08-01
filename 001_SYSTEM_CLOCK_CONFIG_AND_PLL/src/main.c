#include "stm32f4xx.h"
#include "stm32f4_discovery.h"

//islem adimlari;
//src dosyasýný içindeki system_stm32f4xx.c dosyasýný ac
//SYSCLK(Hz) degeri 168000000 olacak
//HSE Frequency(Hz) 8000000 degeri olacak
//PLL_M 8 olarak ayarlamamiz gerekiyor
//libraries dosyasýnýn içine giriyoruz device-->STM32F4xx-->include-->stm32f4xx.h dosyasýnýn içine giriyoruz
//defined(HSE_VALUE) degeri 25Mhz olarak geliyor orayý (uint32_t)8000000 yapiyoruz.Bu iþlemin amacý osilatörümü 8Mhz olarak ayarlamýþ oluyoruz.

int main(void)
{



  while (1)
  {

  }
}



void EVAL_AUDIO_TransferComplete_CallBack(uint32_t pBuffer, uint32_t Size){
  /* TODO, implement your code here */
  return;
}

/*
 * Callback used by stm324xg_eval_audio_codec.c.
 * Refer to stm324xg_eval_audio_codec.h for more info.
 */
uint16_t EVAL_AUDIO_GetSampleCallBack(void){
  /* TODO, implement your code here */
  return -1;
}
