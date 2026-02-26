                 unsigned
                g_81
                ;int
               g_4
                   ,
               g_80
                             ;
                 short
 safe_mul_func_int16_t_s_s (
        short
                                    si1,
        short
                                                 si2 )
{
  return
    si1 * si2;
}
                 char
 safe_lshift_func_uint8_t_u_s (
        unsigned
                                       left, int right )
{
  return
                                                    left >                 right     ?
      left   :
     left <<       right  ;
}
        unsigned
 safe_rshift_func_uint16_t_u_u (
        unsigned
                                         left, unsigned     right )
{}
        unsigned
 safe_sub_func_uint32_t_u_u (
        unsigned
                                      ui1,
        unsigned
                                                    ui2 )
{}
 struct
                       S0
                 { signed
          f0
                   ,
          f1
                             ;
                 int
           f3
                             ;
                             }
                          l_196
                                       ;
       struct S0 g_152[2]                                                                  ;
        unsigned
                func_124(                  );
       struct S0 func_129(                                 );
       struct S0 func_76(  )
{
    struct S0 l_147 = { 5L                                   };
if (                                                                                                                                                                     func_124(func_129( l_147                )   )                                                                            )
    {
}
    }
        unsigned
                func_124(                  )
{}
       struct S0 func_129( struct S0 p_131,
        unsigned
                                                     p_132 )
{
    struct S0 l_151                             ;
        int
                l_164
                   ,
            l_195
                             ;
for (         ;  l_195 <= 3 ; )
    {
     p_132 = 0
       ;for ( ;
                 p_132 <= 39
                 ;
                               ++p_132
                           )  {
             p_131.f0 = 0
       ;for ( ;
                            p_131.f0 <= 2
                 ;
                                            p_131.f0 += 1
                           )  {
            g_152[0] = l_151;
            l_151.f3 = g_81          ;
                    g_80 =                                                                                                                     safe_rshift_func_uint16_t_u_u( l_151.f3 ^=     7        ,                                                                                                     safe_sub_func_uint32_t_u_u(g_4         ,                                   l_195 =  safe_mul_func_int16_t_s_s(     safe_lshift_func_uint8_t_u_s(                            g_152[0].f3
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       , 2)                        && p_131.f1            , g_152      )                )                                        )                                                                                                   < p_131.f1  ;
                    for (         ;  l_164      ; l_164 += 1)
                        g_152[0] = l_196;
                                        }
                                        }
    }
}
int main ( )
{
    }
