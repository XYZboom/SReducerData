
                 short 
               g_189
                ;
                 long 
               g_455
                ;
                 int 
               g_3331
                ;unsigned 
                crc32_context
                ;
        long
 safe_add_func_int64_t_s_s (
        long
                                    si1,
        long
                                                 si2 )
{
  return
       si1    &&  si2    &&  si1
               ;
}
                 char
 safe_mul_func_uint8_t_u_u (
                 char
                                    ui1
                 )
{
  return                ui1                       ;
}
                 char
 safe_lshift_func_uint8_t_u_s (
                 int right )
{
  return
      ((char)1)
                          ;
}
        unsigned
 safe_mul_func_uint16_t_u_u (
        unsigned
                                                    ui2 )
{
  return                ((unsigned int)1)                       ;
}
        unsigned short
 safe_mod_func_uint16_t_u_u (
        unsigned
                                                    ui2 )
{
  return
     ui2
               ;
}
        unsigned
                g_75 = 0xDC6F3D13L;
                 long long
                g_99
               ;
                 long long
                g_806      ;
        unsigned
                g_983
                   ,
                g_3487
                             ;
static
               char
              g_4576[ ] = {
  0xA0L,
  0xA0L,
  0xA0L
};
               char
  func_13
  (
        );
        long
func_1 ()
{
                 int
          l_4768
               [
                 7
                         ];
        int
            l_4837
       ;
          l_4768
       [
             2
                 ]
                      =
      func_13
                            ;
      for (g_806 = 0;             ; )
 {
   for (g_189 = 0;  g_189 <= 3 ; )
     {
    if (
           g_75 >=
     (
           safe_mod_func_uint16_t_u_u
    (
           safe_mul_func_uint16_t_u_u
           (
             safe_lshift_func_uint8_t_u_s
      (
                                                                                 l_4837
                          =
                                         ~                             safe_mul_func_uint8_t_u_u (            safe_add_func_int64_t_s_s ( g_455                     ,                                                        g_3487                 )   != ((short)1)           )
             +
                                                                                                                                                                                                                                                                                                 g_806   && 0x57L                      ) )                                                                                      )       > g_4576[2])                                    )
                g_99
                           =
            l_4837
               ;
    else
      {
        g_3331
   =
                                                                                 l_4837
               ;
     g_983 =
                1
                                    ;
      }
    if (
          l_4768
       [
               2
                 ]
                       )
      break;
       }
       return g_983;
   }
  }
               char
  func_13
  (
        )
{}
int
main ()
{
  func_1 ();
 crc32_context =
                   g_983
                                       ;
 printf ("checksum = %X\n",
                     crc32_context
                               );
  return 0;
}
