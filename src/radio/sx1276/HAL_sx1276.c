
#include "HAL_sx1276.h"

void HAL_SX1276_TIMER_INIT( HAL_TimerEvent_t *obj, void (*callback)(void) )
{

}

void HAL_SX1276_TIMER_START( HAL_TimerEvent_t *obj )
{

}

void HAL_SX1276_TIMER_STOP( HAL_TimerEvent_t *obj )
{

}

void HAL_SX1276_TIMER_SET_VALUE( HAL_TimerEvent_t *obj, uint32_t value )
{

}

void HAL_SX1276_IO_IRQ_INIT( DioIrqHandler **callback )
{

}

void HAL_SX1276_SET_ANT_SW_LOWPOWER( bool status )
{

}

void HAL_SX1276_SET_ANT_SW( uint8_t rxTx )
{

}

uint16_t HAL_SX1276_SPI_TRANSFER( uint16_t outData )
{

}

uint8_t HAL_SX1276_GET_PA_SELECT( uint32_t channel )
{

}

void HAL_SX1276_MEMCPY( uint8_t *dst, const uint8_t *src, uint16_t size )
{
    while( size-- )
    {
        *dst++ = *src++;
    }
}
