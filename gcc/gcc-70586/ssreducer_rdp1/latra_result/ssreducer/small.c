               char 
              g_4
                ;
                 unsigned 
                         l_1423
                ;
                 short 
                g_813
                ;
        int 
            l_26
                ;
                 unsigned 
                    l_1955
                ;int 
               g_1215
                ;
        short
               g_188
                ;
                 char
 safe_add_func_int8_t_s_s (
               char
                                              si2 )
{
  return
           si2 ;
}
               char
 safe_lshift_func_int8_t_s_u (
               char
                                     left, unsigned     right )
{
  return
     left <<                right  ;
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
                 short
                g_538 = 0x2A52L;
        unsigned
                g_540 = 0x03F238A4L;
static
                 short
                func_8
                (
        short
                               p_9
                               )  {
                                                                                                                        l_26 =                             safe_mod_func_int32_t_s_s(          p_9 , g_4)                                                                            ;
    if (g_540)
    {
        unsigned
                 l_1288              ;
            for (p_9 = 0;  p_9          ; );
                                                 l_1288 = 0
       ;for ( ;
                                                              l_1288 <= 49
                 ;
                                                                             l_1288 =                            l_1288
             +
                                                                                                                         8
                           )  {
                if ( safe_lshift_func_int8_t_s_u( p_9 && 0xDCE4L ,                                                                                                                      safe_add_func_int8_t_s_s(                  p_9)  ||  p_9 &&                                                                                             safe_mod_func_int32_t_s_s(                                            p_9             , 0xBC2AB98CL)                                                                                                                                       ) )
                                                                                                                                                                            ;
                else
                {
                 l_1423 =                   ((short)1)                                                                                                                                                                                                                                                                                   ;
if( !g_538 )
break;
}
                                                                                                                                                                                    p_9 =  safe_sub_func_uint32_t_u_u(                               0x60781BCDL >=  safe_mod_func_int32_t_s_s(   safe_mod_func_int32_t_s_s(           1                                                                                    , p_9)  > 0xB5L        , p_9)   != p_9  ^ 4294967287UL                              , l_1423)                                                                                                                                                                                                                                   ;
                                                                                                                                                                                                                                                                                                                                        l_26 =                                                                  safe_mod_func_int32_t_s_s(           1  ,
               g_1215
                                                                                                                                                                                                                                                                                                                                                                                                                                                                   )                                                                                                                                                                                           ;
                                        }
    }
    else
                g_813
                                                                                           =                                                                                                                                                                     safe_mod_func_int32_t_s_s(                                                        safe_mod_func_int32_t_s_s(
                    l_1955
                                                                                                                                                                                                                                                                                                                                                                                      , g_188)              , 0x9CFB623FL)                                                                                                                     ;
                    return p_9;
                                            }
static
        int
               func_1()
{
    if (
                                                                      func_8(           1 )                                  );
}
int main (                      )
{
    func_1();
    }
