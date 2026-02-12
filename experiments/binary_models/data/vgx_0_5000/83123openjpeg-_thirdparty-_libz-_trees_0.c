local void compress_block(s, ltree, dtree)
deflate_state *s;
const ct_data *ltree; 
const ct_data *dtree; 
{
unsigned dist;      
int lc;             
unsigned lx = 0;    
unsigned code;      
int extra;          

if (s->last_lit != 0) do {
dist = s->d_buf[lx];
lc = s->l_buf[lx++];
if (dist == 0) {
send_code(s, lc, ltree); 
Tracecv(isgraph(lc), (stderr," '%c' ", lc));
} else {

code = _length_code[lc];
send_code(s, code+LITERALS+1, ltree); 
extra = extra_lbits[code];
if (extra != 0) {
lc -= base_length[code];
send_bits(s, lc, extra);       
}
dist--; 
code = d_code(dist);
Assert (code < D_CODES, "bad d_code");

send_code(s, code, dtree);       
extra = extra_dbits[code];
if (extra != 0) {
dist -= base_dist[code];
send_bits(s, dist, extra);   
}
} 


Assert((uInt)(s->pending) < s->lit_bufsize + 2*lx,
"pendingBuf overflow");

} while (lx < s->last_lit);

send_code(s, END_BLOCK, ltree);
}