                 unsigned 
             l_148
                ;
                 unsigned 
               g_22
                ;
                 int 
               g_80
                ;int 
            l_195
                ;
                 short
 safe_mod_func_int16_t_s_s (
        short
                                                 si2 )
{}
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
 safe_add_func_uint16_t_u_u (  )
{}
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
        unsigned
            f4
                   ,
            f2
                             ;
        int
               g_4
                   ,
           f3
                             ;
};
        unsigned
                g_23[ ] = {0x69C1477AL                        };
        unsigned
                g_81[4]                                                    ;
       struct S0 g_152[2]                                                                  ;
        unsigned
                func_124(                  );
static struct S0 func_129( struct S0      ,
        unsigned
                                                          );
        unsigned
               func_99(              )
{
    struct S0 l_147 = { 5L                                   };
if (                                                                                                                                                                          func_124(func_129( l_147, l_148       )   )                                                                  );
}
        unsigned
                func_124(                  )
{}
       struct S0 func_129( struct S0 p_131,
        unsigned
                                                     p_132
        )
{
    struct S0 l_151 = {0x15L, 5L               };
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
            if (                    safe_lshift_func_int16_t_s_u(               safe_mod_func_int16_t_s_s(                                                             --g_22                                       )                                    , 12)   ^ l_151.f1 )
            {
                struct S0 l_196                                    ;
                    g_80 =                                                                                                                                                                                                                                safe_sub_func_uint32_t_u_u(                                            l_195 =                             (   safe_lshift_func_uint8_t_u_s(                            g_152[0].f3 |=  safe_add_func_uint16_t_u_u( )
         %
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       0xBCA6F5D4L  , 2)                        && p_131.f1) | g_23[1]                               )                                                                                                                               < p_131.f1  ;
                    for (l_164 = 0;  l_164 <= 2 ; l_164 += 1)
                        g_152[0] = l_196;
                }
                                        }
                                        }
    }
    return p_131;
}
int main ( )
{}
