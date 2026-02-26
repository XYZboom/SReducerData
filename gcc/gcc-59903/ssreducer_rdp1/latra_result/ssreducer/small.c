        unsigned
                g_32
                ;
        int
            l_195
                ;
                 char
 safe_lshift_func_uint8_t_u_s (        left  )
{
  return
                                                          left >   255                        ?
      left   :
     left <<             1   ;
}
 struct
              S0
                 {
        signed
          f0
                   ,
          f1
                             ;
        int
           f3
                             ;
                             }
                  g_152
                                       ;
        unsigned
                g_81[ ] = {0xFACDC9FFL                                    };
       struct S0 func_76(  );
        unsigned char
               func_99();
        unsigned
                func_124(                  );
       struct S0 func_129(                                 );
       struct S0 func_1()
        {
            for (;                    ; )
                                 func_76(  )             ;
        }
       struct S0 func_76(  )
{
                                                          func_99()
                    ;
    }
        unsigned char
               func_99()
{
    struct S0 l_147 = { 5L                                   };
if (                                                                                                                                                        func_124(func_129( l_147                )   )                                                                                 );
}
        unsigned
                func_124(                  )
{}
       struct S0 func_129( struct S0 p_131,
        unsigned
                                                     p_132 )
{
    struct S0 l_151 = {0x15L, 5L               };
for (         ;  l_195      ; )
    {
     p_132 = 0
       ;for ( ;
                 p_132 <= 39
                 ;
                               ++p_132
                           )  {
             p_131.f0 = 0
       ;for ( ;
                            p_131.f0 <= 2
                 ;
                                            p_131.f0 += 1
                           )  {
                 g_152
                     = l_151;
            l_151.f3 = g_81[p_131.f0];
            if (       p_131.f0                    ^ l_151.f1 )
                                                                                                                                                                                                                                                                                                                                                                    l_195 =                                 safe_lshift_func_uint8_t_u_s(
                 g_152
       .
                                                                                                                                                                                                                                                                                                                                                                                                                                                                              f3                                    )                        && p_131.f1                                                                                                                                                                        ;
            else
                    for (;  g_32      ; g_32 += 1);
                                        }
                                        }
    }
}
int main ( )
{}
