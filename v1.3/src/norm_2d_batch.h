#pragma once
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

#define Norm2dBatch  Norm2dBatchFloat

extern void Norm2dBatchInt
(           int      *out_data // in_channel x sqrt(in_size) x srqt(in_size)
    , const int      *in_data  // in_channel x sqrt(in_size) x sqrt(in_size)
    , const int      *running_mean
    , const int      *running_var
    , const int      *scale
    , const int      *bias
    , const uint32_t  in_size // the number of data elements per channel
    , const uint16_t  scale_size
    , const uint16_t  bias_size
    , const uint16_t  in_channel
    , const float     epsilon
    #if !defined(__SYNTHESIS__)
    , const int       rigor       // check rigorously when 1
    , const int       verbose     // verbose level
    #endif
);

extern void Norm2dBatchFloat
(           float    *out_data // in_channel x in_size x in_size
    , const float    *in_data  // in_channel x in_size x in_size
    , const float    *running_mean
    , const float    *running_var
    , const float    *scale
    , const float    *bias
    , const uint32_t  in_size     // only for square matrix
    , const uint16_t  scale_size
    , const uint16_t  bias_size
    , const uint16_t  in_channel
    , const float     epsilon
    #if !defined(__SYNTHESIS__)
    , const int       rigor       // check rigorously when 1
    , const int       verbose     // verbose level
    #endif
);

extern void Norm2dBatchDouble
(           double   *out_data // in_channel x in_size x in_size
    , const double   *in_data  // in_channel x in_size x in_size
    , const double   *running_mean
    , const double   *running_var
    , const double   *scale
    , const double   *bias
    , const uint32_t  in_size     // only for square matrix
    , const uint16_t  scale_size
    , const uint16_t  bias_size
    , const uint16_t  in_channel
    , const float     epsilon
    #if !defined(__SYNTHESIS__)
    , const int       rigor       // check rigorously when 1
    , const int       verbose     // verbose level
    #endif
);

#ifdef __cplusplus
}
#endif
