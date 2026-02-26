                 short 
               g_188
                ;
                 unsigned 
                    l_1955
                ;
                 signed 
              g_4
                ;
                 int 
               g_1215
                ;
                 short 
               g_974
                ;signed 
              g_361
                ;
                 unsigned
                g_813
                ;
        signed
 safe_lshift_func_int8_t_s_u (
                                     left  )
{
  return
      left
                                   ;
}
        int
 safe_mod_func_int32_t_s_s (
        int
                                    si1,
        int
                                                 si2 )
{
  return
      si2 == 0  ||   si1                     &&  si2            ?
      si1   :
     si1 % si2 ;
}
        unsigned
 safe_sub_func_uint32_t_u_u (
        unsigned
                                      ui1,
        unsigned
                                                    ui2 )
{
  return ui1 - ui2;
}
        unsigned
                g_540 = 0x03F238A4L;
        unsigned
               g_1129
              =
                        252UL
                    ;
static
        unsigned
                func_8(
        short
                                  );
static
        int
               func_1()
{
        unsigned
             l_5[6][7] =                                                                {1UL                                }                                                                                                                                                                                                 ;
    if (                                                                                              func_8(l_5[1][6])                              );
}
        unsigned
                func_8(
        short
                               p_9)
{
        int
            l_26
              =
                   0xD437F1BDL
                    ;
                                                g_974 =                                                                                                                                        safe_mod_func_int32_t_s_s(          p_9 , g_4)                                                                        ;
    if (g_540)
    {
        int
                l_1179 = 0xF7BD02E2L;
        short
                l_1271 = 0x809CL;
        unsigned
                         l_1423
                   ,
                 l_1288
                             ;
                                                 l_1288 = 0
       ;for ( ;
                                                              l_1288 <= 49
                 ;
                                                                             l_1288 =                            l_1288
             +
                                                                                                                         8
                           )  {
        int
                    l_1386[8][6][5] =   {1L                                          }                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      ;
                if (                                                safe_lshift_func_int8_t_s_u(                                                                                                                                   l_1386[6][5][0]
         +
                                                                                                                                                                                                                                                               p_9   ||  p_9                                                                                                                                                                                                                                                                                                                                                )   )
                {
                    }
                else
                {
l_1423 =
            l_26
                                                                                                                                                                                                                                                                      ;
printf("l_1179=%lld\n", (long long)l_1179);
if( !g_1129 )
continue;
}
                                                                                                                                                                                  p_9 =  safe_sub_func_uint32_t_u_u(                            0x60781BCDL >=  safe_mod_func_int32_t_s_s(   safe_mod_func_int32_t_s_s( l_1271                                                                                                                         , p_9)  > 0xB5L        , p_9)   != p_9  ^ 4294967287UL                              , l_1423)                                                                                                                                                                                                                           ;
                                                                                                                                                                                                                                                                                                                                                                                                                               l_26 =                                                                           safe_mod_func_int32_t_s_s(                                                                                                      g_361       ,
               g_1215
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       )                                                                                                                                                                                                          ;
                                        }
    }
    else
                g_813
                                                                                                    =                                                                                                                                                                                                    safe_mod_func_int32_t_s_s(                                                              safe_mod_func_int32_t_s_s(
                    l_1955
                                                                                                                                                                                                                                                                                                                                                                                                                                    , g_188)                    , 0x9CFB623FL)                                                                                                                     ;
                    return p_9;
}
int main (                      )
{
    func_1();
    }
