                 unsigned 
    l_8
                ;
                 short 
  g_94
                ;unsigned 
  g_129
                ;
                 signed
 safe_mod_func_int8_t_s_s (
        signed
                                  si1,
        signed
                                              si2 )
{
  return
      si2 == 0                                         ?
      si1   :
     si1 % si2 ;
}
        short
 safe_lshift_func_int16_t_s_s (
        short
                                       left, int right )
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
                 short
 safe_mul_func_uint16_t_u_u (
                 short
                                      ui1,
                 short
                                                    ui2 )
{
  return                                      ui2 ;
}
                 short
 safe_lshift_func_uint16_t_u_u (
                 short
                                         left, unsigned     right )
{
  return
     left                          ;
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
    if ( 0x4F92L <  safe_lshift_func_int16_t_s_s (                                                                1   |                                (l_220 =  safe_mod_func_int8_t_s_s (                                                         p_40 , p_40) )                               >= g_94                                              , 6)  )
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
    g_129;
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
   p_47
                               )  {
                                                                                                    g_7 =                    6L                        ;
  return
              1 ;
                                            }
        int
func_2
                        (
   p_4
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
       safe_mul_func_uint16_t_u_u
       (           1  ,  safe_mul_func_uint16_t_u_u (p_4,  safe_rshift_func_int16_t_s_u (g_7 ) ) ) ;
    if (              1L & l_8  ||                                                   safe_lshift_func_uint16_t_u_u (65535UL,  func_39 (  func_41 (func_46 (g_7)   )                ) )                                          , l_8              )
      return
           1 ;
  }
                                              }
int
main
  (
)
{
  if (      func_2 ( g_7 )                                                                                                                 )
  {
    }
  return
    0;
}
