                              signed
  g_181
                ;
        int
  g_21
                ;
                 signed
 safe_mod_func_int8_t_s_s (
        signed
                                              si2 )
{
  return
      si2 == 0                                         ?
      ((int)1)   :
     ((int)1) % si2 ;
}
        short
 safe_rshift_func_int16_t_s_u (        left  )
{
  return
      left                                                    ?
      left   :
                                           1   ;
}
        int
 safe_add_func_int32_t_s_s (
        int
                                    si1,
        int
                                                 si2 )
{
  return
       si1               &&  si1 >   2147483647 -si2                                                              ?
      si1   :
     si1 + si2 ;
}
                 short
 safe_lshift_func_uint16_t_u_u (
                 unsigned     right )
{
  return
              1
                             ;
}
        signed
  g_7
  =
    6L ;
        unsigned
    l_8
                   ,
  g_176
                             ;
                 short
func_39
                (
   p_40
                               )  {
     g_176
     =
     0
       ;for ( ;
      g_176
      <
      12
                 ;
     g_176
     =
     safe_add_func_int32_t_s_s
     (g_176,
      3)
                           )  {
        int
      l_220
                 ;
    if (                                           (                                                                                                   (l_220 =  safe_mod_func_int8_t_s_s (                                                           p_40) )                                                                      || 0x282EL) !=           1        )
    {
      }
    else
      if ( p_40 <=                1                                                                                                          )
      {
 }
      else
 if (p_40)
      if (l_220)
 break;
                                        }
  return
              1
                             ;
                                            }
        int
func_2
                        (
   )  {
  l_8 = g_7;
  for
    (
         ;
         ;
     )
  {
    g_21
      =
                                        safe_rshift_func_int16_t_s_u (g_7 )     ;
    if (              1L & l_8  ||                                                   safe_lshift_func_uint16_t_u_u (  func_39 (
                                                                                                                                                                             g_181 ) )                                                       , l_8              )
      return
           1 ;
  }
                                              }
int
main
  (
)
{
  if (      func_2 (  )                                                                                                                                                     );
  return
    0
                             ;
}
