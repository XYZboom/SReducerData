                 unsigned
    l_8
                ;char
  g_181
                ;
                 char
 safe_mod_func_int8_t_s_s (
               char
                                  si1,
               char
                                              si2 )
{
  return
      si2 == 0                                         ?
      si1   :
     si1 % si2 ;
}
        unsigned
 safe_lshift_func_uint16_t_u_u (
        unsigned
                                         left, unsigned     right )
{
  return
      left
                                   ;
}
               char
  g_7
  =
    6L ;
        short
  g_245
  =
    5L ;
        unsigned
  g_129
                   ,
  g_1504
                             ;
        unsigned
func_39
                (
   p_40
                               )  {
  for
    (
      ;
         ;
     )
  {
        int
      l_220
                 ;
    if ( 0x4F92L <                                                                                                                                                               ((l_220 =  safe_mod_func_int8_t_s_s (                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   p_40 , p_40) ) ==   3L )                                                                                     )
    {
      }
    else
    {
               char
 l_319
 =
 0xE3L;
      if ( p_40 <=              !l_319                                                                                                                                                                                                                                                                                                                                                                                                         )
      {
 if (g_245)
   break;
 }
      else
      if (l_220)
 break;
    }
  }
  return
    g_129;
                                            }
        int
func_2
                        (char
   p_3,
        unsigned
   p_4
                                   )  {
  l_8 = g_7;
  for
    (
         ;
         ;
     )
    if (              1L & l_8  ||                                                   safe_lshift_func_uint16_t_u_u (65535UL,         func_39 (                                      g_181 ) )                                              , l_8              )
    {
        unsigned
 l_867
 =
 1UL;
      return
 l_867;
    }
                                              }
int
main
  (
)
{
        short
    l_6
    =
    0L;
  if (      func_2 (l_6, g_7 )                                                                                                                                                                                                                                                                                                                                                                                           )
  {
    }
                            g_245 =                                                                                                       g_1504                                                                                                                                                                                                                                                                                                                                                                ;
}
