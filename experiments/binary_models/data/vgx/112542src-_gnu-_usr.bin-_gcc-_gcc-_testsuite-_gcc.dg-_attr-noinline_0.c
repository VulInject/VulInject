static inline void FUN1(void); 

static void FUN1(void) FUN2((VAR1)); 

static void FUN1(void) {}

static inline void FUN3(void);

static void FUN3(void) {} 

static void FUN3(void) FUN2((VAR1)); 

static void FUN4(void) FUN2((VAR1)); 

static inline void FUN4(void); 

static void FUN4(void) {}

void FUN5 () {
FUN6 ();
FUN7 ();
FUN8 ();
FUN9 ();
FUN10 ();
FUN11 ();
FUN1 ();
FUN3 ();
FUN4 ();
}