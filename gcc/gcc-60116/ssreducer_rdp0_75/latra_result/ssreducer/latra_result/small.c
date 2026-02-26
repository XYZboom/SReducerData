                 int 
                        g_3
                ;long 
               g_455
                ;
                 short 
               g_189
                ;
                 unsigned 
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
                                    ui1
                 )
{
  return                ui1                       ;
}
                 char
 safe_lshift_func_uint8_t_u_s (
                     right )
{
  return
                   right  ;
}
        unsigned
                g_75 = 0xDC6F3D13L;
                 long long
                g_99
               ;
                 long long
                g_806      ;
        int
               g_3331 =   4L ;
        static
               char
              g_4576[ ] = {
  0xA0L,
  0xA0L,
  0xA0L
};
        long
func_1 ()
{
        int
              l_4837
               [
                     5
                         ];
      for (g_806 = 0;             ; )
 {
   for (g_189 = 0;  g_189 <= 3 ; )
     {
    if (
           g_75 >=
     (
             safe_lshift_func_uint8_t_u_s
      (
              l_4837
       [
                 4
                 ]
                          =
                                         ~                             safe_mul_func_uint8_t_u_u (   safe_add_func_int64_t_s_s ( g_455                     ,                                                                       1                  )   !=         1            )
             +
                                                                                                                                                                                                                                                                                        g_806   && 0x57L                      )                                                                                         > g_4576[2])                                    )
      {
        g_3 =        1
                                                                         ;
                g_99
                           =
              l_4837
       [
                   4
                 ]
                                                                                                                                                                                                                                                                                                 ;
      }
    else
        g_3331
   =
              l_4837
       [
                                                                                                         4
                 ]
                                                                                                                                            ;
       if (g_3331)
  break;
       }
         return                1 ;
   }
  }
int
main ()
{
  func_1 ();
 crc32_context =
                   g_3
                                       ;
 printf ("checksum = %X\n",
                     crc32_context
                               );
  return 0;
}
