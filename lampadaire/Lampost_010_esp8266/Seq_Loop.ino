
int Cue = 59;// 30 cue = 1 sec 15 60 cue = 2 sec 30 donc 3.8 100° de seconde par cue

int lo = 0;
int R_lo = 0;
int G_lo = 0;
int B_lo = 0;

int R_hi = 200;
int G_hi = 150;

int R_m1 = 70;
int G_m1 = 40;

int R_m2 = 180;
int G_m2 = 130;


int RedList1[]   = {R_m1, R_hi, R_hi, R_hi, R_hi, R_hi, R_hi, R_hi, R_hi, R_hi,
                    R_hi, R_hi, R_hi, R_hi, R_hi, R_hi, R_hi, R_m2, R_hi, R_hi,
                    R_hi, R_hi, R_hi, R_hi, R_hi, R_hi, R_hi, R_hi, R_hi, R_hi,
                    R_m1, R_hi, R_hi, R_hi, R_hi, R_hi, R_hi, R_hi, R_hi, R_hi,
                    R_hi, R_hi, R_hi, R_hi, R_hi, R_hi, R_hi, R_m2, R_hi, R_hi,
                    R_hi, R_hi, R_hi, R_hi, R_hi, R_hi, R_m1, R_hi, R_m1, R_hi
                   };

int GreenList1[] = {G_m1, G_hi, G_hi, G_hi, G_hi, G_hi, G_hi, G_hi, G_hi, G_hi,
                   G_hi, G_hi, G_hi, G_hi, G_hi, G_hi, G_hi, G_m2, G_hi, G_hi,
                   G_hi, G_hi, G_hi, G_hi, G_hi, G_hi, G_hi, G_hi, G_hi, G_hi,
                   G_m1, G_hi, G_hi, G_hi, G_hi, G_hi, G_hi, G_hi, G_hi, G_hi,
                   G_hi, G_hi, G_hi, G_hi, G_hi, G_hi, G_hi, G_m2, G_hi, G_hi,
                   G_hi, G_hi, G_hi, G_hi, G_hi, G_hi, G_m1, G_hi, G_m1, G_hi
                   };

int BlueList1[]  = {B_lo, B_lo, B_lo, B_lo, B_lo, B_lo, B_lo, B_lo, B_lo, B_lo,
                    B_lo, B_lo, B_lo, B_lo, B_lo, B_lo, B_lo, B_lo, B_lo, B_lo,
                    B_lo, B_lo, B_lo, B_lo, B_lo, B_lo, B_lo, B_lo, B_lo, B_lo,
                    B_lo, B_lo, B_lo, B_lo, B_lo, B_lo, B_lo, B_lo, B_lo, B_lo,
                    B_lo, B_lo, B_lo, B_lo, B_lo, B_lo, B_lo, B_lo, B_lo, B_lo,
                    B_lo, B_lo, B_lo, B_lo, B_lo, B_lo, B_lo, B_lo, B_lo, B_lo
                   };

int RedList2[]   = {lo, lo, lo, lo, lo, lo, lo, lo, lo, lo,
                    lo, lo, lo, lo, lo, lo, lo, lo, lo, lo,
                    lo, lo, lo, lo, lo, lo, lo, lo, lo, lo,
                    lo, lo, lo, lo, lo, lo, lo, lo, lo, lo,
                    lo, lo, lo, lo, lo, lo, lo, lo, lo, lo,
                    lo, lo, lo, lo, lo, lo, lo, lo, lo, lo
                   };

int GreenList2[] = {lo, lo, lo, lo, lo, lo, lo, lo, lo, lo,
                    lo, lo, lo, lo, lo, lo, lo, lo, lo, lo,
                    lo, lo, lo, lo, lo, lo, lo, lo, lo, lo,
                    lo, lo, lo, lo, lo, lo, lo, lo, lo, lo,
                    lo, lo, lo, lo, lo, lo, lo, lo, lo, lo,
                    G_hi, G_hi, G_hi, G_hi, G_hi, G_hi, G_m1, G_hi, G_m1, G_hi
                   };

int BlueList2[]  = {B_lo, B_lo, B_lo, B_lo, B_lo, B_lo, B_lo, B_lo, B_lo, B_lo,
                    B_lo, B_lo, B_lo, B_lo, B_lo, B_lo, B_lo, B_lo, B_lo, B_lo,
                    B_lo, B_lo, B_lo, B_lo, B_lo, B_lo, B_lo, B_lo, B_lo, B_lo,
                    B_lo, B_lo, B_lo, B_lo, B_lo, B_lo, B_lo, B_lo, B_lo, B_lo,
                    B_lo, B_lo, B_lo, B_lo, B_lo, B_lo, B_lo, B_lo, B_lo, B_lo,
                    B_lo, B_lo, B_lo, B_lo, B_lo, B_lo, B_lo, B_lo, B_lo, B_lo
                   };

int RedList3[]   = {lo, lo, lo, lo, lo, lo, lo, lo, lo, lo,
                    lo, lo, lo, lo, lo, lo, lo, lo, lo, lo,
                    lo, lo, lo, lo, lo, lo, lo, lo, lo, lo,
                    lo, lo, lo, lo, lo, lo, lo, lo, lo, lo,
                    lo, lo, lo, lo, lo, lo, lo, lo, lo, lo,
                    lo, lo, lo, lo, lo, lo, lo, lo, lo, lo
                   };

int GreenList3[] = {lo, lo, lo, lo, lo, lo, lo, lo, lo, lo,
                    lo, lo, lo, lo, lo, lo, lo, lo, lo, lo,
                    lo, lo, lo, lo, lo, lo, lo, lo, lo, lo,
                    lo, lo, lo, lo, lo, lo, lo, lo, lo, lo,
                    lo, lo, lo, lo, lo, lo, lo, lo, lo, lo,
                    lo, lo, lo, lo, lo, lo, lo, lo, lo, lo
                   };

int BlueList3[]  = {lo, lo, lo, lo, lo, lo, lo, lo, lo, lo,
                    lo, lo, lo, lo, lo, lo, lo, lo, lo, lo,
                    lo, lo, lo, lo, lo, lo, lo, lo, lo, lo,
                    lo, lo, lo, lo, lo, lo, lo, lo, lo, lo,
                    lo, lo, lo, lo, lo, lo, lo, lo, lo, lo,
                    G_hi, G_hi, G_hi, G_hi, G_hi, G_hi, G_m1, G_hi, G_m1, G_hi
                   };
