                 short 
               g_188
                ;
                 int 
            l_975
                ;
                 signed 
              g_4
                ;
                 unsigned 
                  g_813
                ;
                 char 
                    l_1955
                ;int 
                         l_1423
                ;
                 int
               g_1215
                ;
               char
 safe_add_func_int8_t_s_s (
        signed
                                  si1,
        signed
                                              si2 )
{
  return
           si2 ;
}
        short
 safe_unary_minus_func_int16_t_s (        si )
{}
        int
 safe_mod_func_int32_t_s_s (
        int
                                    si1,
        int
                                                 si2 )
{
  return
      si2 == 0  ||  (si1                   ) &&  si2            ?
      si1   :
     si1 % si2 ;
}
                 int
 safe_sub_func_uint32_t_u_u (
                 int
                                      ui1,
                 int
                                                    ui2 )
{
  return ui1 - ui2;
}
                 int
                g_540 = 0x03F238A4L;
                 char
               g_1129 = 252UL;
static
        unsigned
                 func_8
                (
        short
                               p_9
                               )  {
        int
            l_26 = 0xD437F1BDL;
            l_975
                =                                                                                                                                                               safe_mod_func_int32_t_s_s(          p_9 , g_4)                                                                            ;
    if (g_540)
    {
        int
                l_1179 = 0xF7BD02E2L;
                 int
                 l_1288              ;
                                                 l_1288 = 0
       ;for ( ;
                                                              l_1288 <= 49
                 ;
                                                                             l_1288 =                            l_1288
             +
                                                                                                                         8
                           )
            {
                if (                                                                                                                                                                              safe_add_func_int8_t_s_s(           1            , p_9)  ||  p_9 &&                 safe_unary_minus_func_int16_t_s(                                  l_1179 =  safe_mod_func_int32_t_s_s(                                            p_9             , 0xBC2AB98CL)                                      )                                                                                                            )
                {
                    }
                else
                {
                    l_1423 =                                                                                                                                                                                                                    l_26                                                                     ;
printf("l_1179=%lld\n", (long long)l_1179);
if( !g_1129 )
continue;
}
                                                                                                                                                          p_9 =  safe_sub_func_uint32_t_u_u(                            0x60781BCDL >=  safe_mod_func_int32_t_s_s(   safe_mod_func_int32_t_s_s(           1                                                                                               , p_9)  > 0xB5L        , p_9)   != p_9  ^ 4294967287UL                              , l_1423)                                                                                                                                                                                                                                         ;
                                                                                                                                                                                                                                                                                                                                             l_26 =                                                                  safe_mod_func_int32_t_s_s(           1  ,
               g_1215
                                                                                                                                                                                                                                                                                                                                                                                                                                                                        )                                                                                                                                                                                                           ;
                }
    }
    else
                g_813
                                                                                           =                                                                                                                                                                                        safe_mod_func_int32_t_s_s(                                                        safe_mod_func_int32_t_s_s(
                    l_1955
                                                                                                                                                                                                                                                                                                                                                                                                         , g_188)              , 0x9CFB623FL)                                                                                                                                 ;
                    return p_9;
                                            }
static
        int
               func_1()
{
                 int
             l_5[6][7] =  {            0xB03629AAL                                    }                                                                                                                                                                                                                                       ;
    if (                                                                                  func_8(l_5[1][6])                              );
}
int main (                      )
{
    func_1();
    }
