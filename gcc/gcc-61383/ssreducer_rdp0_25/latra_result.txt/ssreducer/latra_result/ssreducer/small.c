                 unsigned 
  g_176
                ;int 
  g_21
                ;
                 unsigned 
    l_8
                ;
                              char 
  g_181
                ;
                 char
 safe_add_func_int8_t_s_s (       si1  )
{
  return
              1
                             ;
}
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
        short
 safe_rshift_func_int16_t_s_u (
        short
                                       left, unsigned     right )
{
  return
      left                                        ?
      left   :
     left >>                right  ;
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
               char
  g_7
  =
    6L ;
                 short
func_39
                (
               char
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
    if ( 0x4F92L <                                                                                                        safe_add_func_int8_t_s_s (    l_220 =  safe_mod_func_int8_t_s_s (                                                                                                                  p_40 , p_40)                              )                                                             )
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
                                                     safe_rshift_func_int16_t_s_u (g_7, 0)     ;
    if (              1L & l_8  ||                                                                                    func_39 (
                                                                                                                                                                             g_181 )                                            , l_8              )
      return
           1 ;
  }
                                              }
int
main
  (
)
{
  if (      func_2 (  )                                                                                                                                                                                                                                      );
  return
                                                                                                                                                                                                                                                                                                                                                              1
                           >= 32
                                   ;
  }
