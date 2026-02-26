                 long 
               g_455
                ;
                              unsigned 
                crc32_context
                ;
                 short 
                g_922
                ;
                 int 
               g_3331
                ;
        short 
               g_189
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
                   right  ;
}
        unsigned
                g_75 = 0xDC6F3D13L;
                 long long
                g_99
               ;
                 long long
                g_806      ;
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
             safe_lshift_func_uint8_t_u_s
      (
                                                                                                  l_4837
                          =
                                         ~                             safe_mul_func_uint8_t_u_u (   safe_add_func_int64_t_s_s ( g_455                     ,                                                        ((unsigned int)1)                 )   != ((short)1)           )
             +
                                                                                                                                                                                                                                                                                        g_806   && 0x57L                      )                                                                                         > g_4576[2])                                    )
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
             g_922 =
                 1                                                                                                                                                   ;
        }
    if (
          l_4768
       [
               2
                 ]
                       )
      break;
       }
       return ((unsigned int)1);
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
                   g_922
                                       ;
 printf ("checksum = %X\n",
                     crc32_context
                               );
  return 0;
}
