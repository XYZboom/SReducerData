                 int 
            l_195
                ;unsigned 
                g_23
                ;
                 int
               g_80
                ;
        short
 safe_lshift_func_int16_t_s_u (
        short
                                       left, unsigned     right )
{
  return
      left                                       ||  left >                            right
                                   ;
}
        unsigned char
 safe_lshift_func_uint8_t_u_s (
        unsigned char
                                       left, int right )
{
  return
                                                    left >                 right     ?
      left   :
     left <<       right  ;
}
        unsigned
 safe_sub_func_uint32_t_u_u (
        unsigned
                                                    ui2 )
{}
struct S0 {
        signed
          f0
                   ,
          f1
                             ;
        int
               g_4
                   ,
           f3
                             ;
};
        unsigned
                g_81[ ] = {0xFACDC9FFL                                    };
       struct S0 g_152[2]                                                                  ;
        unsigned
                g_203[3]                            ;
        unsigned
                func_124(                  );
static struct S0 func_129( struct S0      ,
        unsigned
                                                          ,
        short
                                                                         );
        unsigned
               func_99()
{
    struct S0 l_147 = { 5L                                   };
if (                                                                                                                                                                     func_124(func_129( l_147,            1 ,           1 )   )                                                                            );
}
        unsigned
                func_124(                  )
{}
       struct S0 func_129( struct S0 p_131,
        unsigned
                                                     p_132,
        short
                                                                    p_133)
{
    struct S0 l_151                             ;
for (         ;  l_195      ; )
    {
     p_132 = 0
       ;for ( ;
                 p_132 <= 39
                 ;
                               ++p_132
                           )  {
        int
               g_4
                   ,
                l_164
                             ;
             p_131.f0 = 0
       ;for ( ;
                            p_131.f0 <= 2
                 ;
                                            p_131.f0 += 1
                           )  {
            g_152[0] = l_151;
            l_151.f3 = g_81[p_131.f0];
            if (                    safe_lshift_func_int16_t_s_u(  (l_151.f0 ^                            0x58C3L   ) &  l_164                 | p_133 , 12)              )
            {
                struct S0 l_196                                    ;
                    g_80 =                                                                                                                                                                                                                                                        safe_sub_func_uint32_t_u_u(                                            l_195 =                             (   safe_lshift_func_uint8_t_u_s(                            g_152[0].f3 |=
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               0xBCA6F5D4L  , 2)                        && p_131.f1) |
                g_23
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 )                                                                                                                             < p_131.f1  ;
                         l_164 = 0
       ;for ( ;
                                     l_164 <= 2
                 ;
                                                  l_164 += 1
                           )  {
                        g_152[0] = l_196;
                        g_203[2]++;
                                        }
                }
                                        }
                                        }
    }
    return p_131;
}
int main ( )
{}
