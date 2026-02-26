                 short 
               g_540
                ;
                 short 
               g_189
                ;
                 int 
                        g_3898
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
                                    ui1,
                 char
                                                 ui2 )
{
  return                ui1                       ;
}
                 char
 safe_lshift_func_uint8_t_u_s (
                 char
                                       left, int right )
{
  return
      left
                          ;
}
        unsigned
 safe_mul_func_uint16_t_u_u (
        unsigned
                                      ui1,
        unsigned
                                                    ui2 )
{
  return                ui1                       ;
}
        unsigned short
 safe_mod_func_uint16_t_u_u (
        unsigned
                                      ui1,
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
                 char
               g_1394
                   ,
               g_236
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
        int
                 ,
        int
                               ,
        unsigned short
                                              );
        long
func_1 ()
{
                 char
          l_19 = 4UL;
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
    (l_19,
           safe_mul_func_uint16_t_u_u
           (g_3898,
             safe_lshift_func_uint8_t_u_s
      (g_236,
                                                                                 l_4837
                          =
                                         ~                             safe_mul_func_uint8_t_u_u (            safe_add_func_int64_t_s_s ( g_455                     ,                                                        g_3487                 )   != g_540          , g_1394)
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
        int
            p_15 ,
        int
                           p_17,
        unsigned short
                                          p_18)
{
  }
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
