static int speed_map ( int speed , const int * map ) {
 int res ;
 do {
 res = * map ++ ;
 }
 while ( speed >= * map ++ ) ;
 return res ;
 }