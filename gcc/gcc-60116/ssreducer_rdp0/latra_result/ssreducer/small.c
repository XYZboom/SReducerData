                 int 
               g_3331
                ;
                 long 
          g_99
                ;
        long 
               g_3807
                ;
                 unsigned 
                crc32_context
                ;
                 long 
                g_806
                ;
        long 
                g_2599
                ;
                 short 
               g_189
                ;
        long 
               g_455
                ;
        short 
               g_540
                ;
                 long
 safe_add_func_int64_t_s_s (
        long long
                                    si1,
        long
                                                 si2 )
{
  return
       si1               &&  si1 >                          si2
               ;
}
        unsigned
 safe_mul_func_uint8_t_u_u (
        unsigned
                                    ui1
        )
{
  return                ui1                       ;
}
        unsigned
 safe_lshift_func_uint8_t_u_s (
        unsigned
                                       left, int right )
{
  return
     left                 ;
}
        unsigned
 safe_mod_func_uint32_t_u_u (
        unsigned
                                                    ui2 )
{}
                 long long
 safe_add_func_uint64_t_u_u (
                 long
                                      ui1,
                 long long
                                                    ui2 )
{
  return ui1 + ui2;
}
        unsigned
                g_75 = 0xDC6F3D13L;
static
        unsigned
               g_236 = 0x61L;
        unsigned
                g_983
                   ,
                g_3487
                             ;
        signed
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
   for (g_189 = 0;             ; )
     {
    if (
           g_75 >=
     (
             safe_lshift_func_uint8_t_u_s
      (g_236,
            l_4837
                          =
            safe_add_func_uint64_t_u_u ( ~                             safe_mul_func_uint8_t_u_u (            safe_add_func_int64_t_s_s ( g_455                     ,                                                        g_3487                 )   != g_540           )            , g_806)  && 0x57L                      )                                                                                                                >        2 )                                    )
                       g_99
                    =
            l_4837
               ;
    else
        g_3331
   =
             safe_mod_func_uint32_t_u_u
      (                                     g_2599 =                                                                                                                                                                                               g_3807                        )                                                                                                 <    l_4837
               ;
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
        signed
  func_13
  (
        )
 {}
int
main ()
{
  func_1 ();
 crc32_context =
                       g_99
               ;
 printf ("checksum = %X\n",
                     crc32_context
                               );
  return 0;
}
