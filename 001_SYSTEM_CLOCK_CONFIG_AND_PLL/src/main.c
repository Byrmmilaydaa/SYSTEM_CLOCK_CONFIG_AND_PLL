#include "stm32f4xx.h"
#include "stm32f4_discovery.h"

//islem adimlari;
//src dosyas�n� i�indeki system_stm32f4xx.c dosyas�n� ac
//SYSCLK(Hz) degeri 168000000 olacak
//HSE Frequency(Hz) 8000000 degeri olacak
//PLL_M 8 olarak ayarlamamiz gerekiyor
//libraries dosyas�n�n i�ine giriyoruz device-->STM32F4xx-->include-->stm32f4xx.h dosyas�n�n i�ine giriyoruz
//defined(HSE_VALUE) degeri 25Mhz olarak geliyor oray� (uint32_t)8000000 yapiyoruz.Bu i�lemin amac� osilat�r�m� 8Mhz olarak ayarlam�� oluyoruz.

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
