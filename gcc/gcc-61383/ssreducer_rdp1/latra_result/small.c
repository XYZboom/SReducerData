                 unsigned 
    l_8
                ;
                 unsigned 
  g_176
                ;short 
  g_245
                ;
                 signed
 safe_mod_func_int8_t_s_s (        si2 )
{
  return
      si2 == 0                                                 ?
               1    :
              1  % si2 ;
}
        short
 safe_lshift_func_int16_t_s_s (
        short
                                       left, int right )
{
  return
      left < 0  ||        right  < 0  ||        right         ||  left                               ?
      left   :
                   right  ;
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
        unsigned
 safe_lshift_func_uint16_t_u_u (
        unsigned
                                         left, unsigned     right )
{
  return
              1
                             ;
}
        signed
  g_181
                   ,
  g_7
                             ;
static
        unsigned
func_39
(
        signed
);
        int
func_2
  (
   p_4
   )
{
    if (                   l_8  ||                                                   safe_lshift_func_uint16_t_u_u (65535UL,  func_39 (                                      g_181 ) )                                                                  )
      return
           1 ;
  }
        unsigned
func_39
  (
   p_40
)
{
  for
    (
      ;
      g_176
      <
      12 ;
     g_176
     =
     safe_add_func_int32_t_s_s
     (g_176,
      3))
  {
        int
      l_220
                             ;
    if (            safe_lshift_func_int16_t_s_s ( (                                                                                                   (l_220 =  safe_mod_func_int8_t_s_s ( p_40) )                                                                               || 0x282EL) !=           1  , 6)  )
      if (            safe_lshift_func_int16_t_s_s (                                                                                                                                                                                                                                   0x282EL                  , 6)  )
 break;
    else
 continue;
    else
      if ( p_40 <=                                   1    )
      {
 if (g_245)
   break;
 }
      else
 {
      if (l_220)
 break;
 continue;
      }
  }
  return
              1
                             ;
}
int
main
  (
)
{
  if (      func_2 ( g_7 )                                                                                                        )
  {
    }
  return
    0
                             ;
}
