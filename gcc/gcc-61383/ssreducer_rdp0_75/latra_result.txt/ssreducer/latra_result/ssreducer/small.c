                 unsigned
    l_8
                ;
                 signed
 safe_mod_func_int8_t_s_s (
                                              si2 )
{
  return
      si2 == 0                                         ?
            1    :
           1  % si2 ;
}
        short
 safe_lshift_func_int16_t_s_s (
                                       left  )
{
  return
      left
                          ;
}
        short
 safe_rshift_func_int16_t_s_u (        left  )
{
  return
      left                                                    ?
      left   :
                                           1   ;
}
                 signed
  g_7
  =
    6L ;
        int
    l_200
                   ,
  g_21
                             ;
        short
  g_245
  =
    5L ;
                 short
func_39
                (
   p_40
                               )  {
  for
    ( ;
         ;
     )
  {
        int
      l_220
                             ;
    if ( 0x4F92L <  safe_lshift_func_int16_t_s_s (                                                                1   |                                (l_220 =  safe_mod_func_int8_t_s_s (                                                           p_40) )                               >=         1                                                )  )
    {
      }
    else
      if ( p_40 <=                1                       )
      {
 if (g_245)
   break;
 }
      else
      if (l_220)
 break;
  }
  return
                   1 ;
                                            }
                 short
func_41
                (
   p_42
                               )  {
  return
    l_200;
                                            }
        int
func_46
                (
   )  {
                                                                                                    g_7 =                    6L                        ;
  return
              1 ;
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
    if (              1L & l_8  ||                                                                                    func_39 (  func_41 (func_46 ()   )                )                                            , l_8              )
      return
           1 ;
  }
                                              }
int
main
  (
)
{
  if (      func_2 (  )                                                                                                                 );
  return
    0;
}
