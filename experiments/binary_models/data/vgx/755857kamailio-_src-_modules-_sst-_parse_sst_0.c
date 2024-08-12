static inline int  FUN1( char VAR1 ) { return (VAR1 >= '' && VAR1 <= ''); }

static inline unsigned  FUN2( char VAR2 ) { return VAR2 | 0x20; }
static inline unsigned  FUN3( unsigned VAR3 ) { return VAR3 | 0x20202020; }
static inline unsigned  FUN4( unsigned VAR3 ) { return VAR3 |   0x202020; }
static inline unsigned  FUN5( char *VAR4 ) {
return (*(VAR4 + 0) + (*(VAR4 + 1) << 8)
+ (*(VAR4 + 2) << 16) + (*(VAR4 + 3) << 24));
}