

#include "xinclude.h"

static int xdl_get_rec(xdfile_t *xdf, int ri, char const **rec) {

	*rec = xdf->recs[ri]->ptr;

	return xdf->recs[ri]->size;
}


static int xdl_emit_record(xdfile_t *xdf, int ri, char const *pre, xdemitcb_t *ecb) {
	int size, psize = (int)strlen(pre);
	char const *rec;

	size = xdl_get_rec(xdf, ri, &rec);
	if (xdl_emit_diffrec(rec, size, pre, psize, ecb) < 0) {

		return -1;
	}

	return 0;
}



xdchange_t *xdl_get_hunk(xdchange_t **xscr, xdemitconf_t const *xecfg)
{
	xdchange_t *xch, *xchp, *lxch;
	int max_common = 2 * xecfg->ctxlen + xecfg->interhunkctxlen;
	int max_ignorable = xecfg->ctxlen;
	unsigned int ignored = 0; 

	
	for (xchp = *xscr; xchp && xchp->ignore; xchp = xchp->next) {
		xch = xchp->next;

		if (xch == NULL ||
		    xch->i1 - (xchp->i1 + xchp->chg1) >= max_ignorable)
			*xscr = xch;
	}

	if (!*xscr)
		return NULL;

	lxch = *xscr;

	for (xchp = *xscr, xch = xchp->next; xch; xchp = xch, xch = xch->next) {
		int distance = xch->i1 - (xchp->i1 + xchp->chg1);
		if (distance > max_common)
			break;

		if (distance < max_ignorable && (!xch->ignore || lxch == xchp)) {
			lxch = xch;
			ignored = 0;
		} else if (distance < max_ignorable && xch->ignore) {
			ignored += xch->chg2;
		} else if (lxch != xchp &&
			   xch->i1 + (int)ignored - (lxch->i1 + lxch->chg1) > max_common) {
			break;
		} else if (!xch->ignore) {
			lxch = xch;
			ignored = 0;
		} else {
			ignored += xch->chg2;
		}
	}

	return lxch;
}


#if 0
static int def_ff(const char *rec, int len, char *buf, int sz)
{
	if (len > 0 &&
			(isalpha((unsigned char)*rec) || 
			 *rec == '_' || 
			 *rec == '$')) { 
		if (len > sz)
			len = sz;
		while (0 < len && isspace((unsigned char)rec[len - 1]))
			len--;
		memcpy(buf, rec, len);
		return len;
	}
	return -1;
}
#endif

#if 0
static int match_func_rec(xdfile_t *xdf, xdemitconf_t const *xecfg, int ri,
			   char *buf, int sz)
{
	const char *rec;
	int len = xdl_get_rec(xdf, ri, &rec);
	if (!xecfg->find_func)
		return def_ff(rec, len, buf, sz);
	return xecfg->find_func(rec, len, buf, sz, xecfg->find_func_priv);
}
#endif

#if 0
static int is_func_rec(xdfile_t *xdf, xdemitconf_t const *xecfg, int ri)
{
	char dummy[1];
	return match_func_rec(xdf, xecfg, ri, dummy, sizeof(dummy)) >= 0;
}
#endif

struct func_line {
	int len;
	char buf[80];
};

#if 0
static int get_func_line(xdfenv_t *xe, xdemitconf_t const *xecfg,
			  struct func_line *func_line, int start, int limit)
{
	int l, size, step = (start > limit) ? -1 : 1;
	char *buf, dummy[1];

	buf = func_line ? func_line->buf : dummy;
	size = func_line ? sizeof(func_line->buf) : sizeof(dummy);

	for (l = start; l != limit && 0 <= l && l < xe->xdf1.nrec; l += step) {
		int len = match_func_rec(&xe->xdf1, xecfg, l, buf, size);
		if (len >= 0) {
			if (func_line)
				func_line->len = len;
			return l;
		}
	}
	return -1;
}
#endif

#if 0
static int is_empty_rec(xdfile_t *xdf, int ri)
{
	const char *rec;
	int len = xdl_get_rec(xdf, ri, &rec);

	while (len > 0 && XDL_ISSPACE(*rec)) {
		rec++;
		len--;
	}
	return !len;
}
#endif

int xdl_emit_diff(xdfenv_t *xe, xdchange_t *xscr, xdemitcb_t *ecb,
		  xdemitconf_t const *xecfg) {
	int s1, s2, e1, e2, lctx;
	xdchange_t *xch, *xche;
#if 0
	int funclineprev = -1;
#endif
	struct func_line func_line;

	func_line.len = 0;

	for (xch = xscr; xch; xch = xche->next) {
		xche = xdl_get_hunk(&xch, xecfg);
		if (!xch)
			break;

		s1 = XDL_MAX(xch->i1 - xecfg->ctxlen, 0);
		s2 = XDL_MAX(xch->i2 - xecfg->ctxlen, 0);

#if 0
		if (xecfg->flags & XDL_EMIT_FUNCCONTEXT) {
			int fs1, i1 = xch->i1;

			
			if (i1 >= xe->xdf1.nrec) {
				int i2 = xch->i2;

				
				while (i2 < xe->xdf2.nrec) {
					if (is_func_rec(&xe->xdf2, xecfg, i2))
						goto post_context_calculation;
					i2++;
				}

				
				i1 = xe->xdf1.nrec - 1;
			}

			fs1 = get_func_line(xe, xecfg, NULL, i1, -1);
			while (fs1 > 0 && !is_empty_rec(&xe->xdf1, fs1 - 1) &&
			       !is_func_rec(&xe->xdf1, xecfg, fs1 - 1))
				fs1--;
			if (fs1 < 0)
				fs1 = 0;
			if (fs1 < s1) {
				s2 = XDL_MAX(s2 - (s1 - fs1), 0);
				s1 = fs1;

				
				while (xchp != xch &&
				       xchp->i1 + xchp->chg1 <= s1 &&
				       xchp->i2 + xchp->chg2 <= s2)
					xchp = xchp->next;

				
				if (xchp != xch) {
					xch = xchp;
					goto pre_context_calculation;
				}
			}
		}

 post_context_calculation:
#endif
		lctx = xecfg->ctxlen;
		lctx = XDL_MIN(lctx, xe->xdf1.nrec - (xche->i1 + xche->chg1));
		lctx = XDL_MIN(lctx, xe->xdf2.nrec - (xche->i2 + xche->chg2));

		e1 = xche->i1 + xche->chg1 + lctx;
		e2 = xche->i2 + xche->chg2 + lctx;

#if 0
		if (xecfg->flags & XDL_EMIT_FUNCCONTEXT) {
			int fe1 = get_func_line(xe, xecfg, NULL,
						 xche->i1 + xche->chg1,
						 xe->xdf1.nrec);
			while (fe1 > 0 && is_empty_rec(&xe->xdf1, fe1 - 1))
				fe1--;
			if (fe1 < 0)
				fe1 = xe->xdf1.nrec;
			if (fe1 > e1) {
				e2 = XDL_MIN(e2 + (fe1 - e1), xe->xdf2.nrec);
				e1 = fe1;
			}

			
			if (xche->next) {
				int l = XDL_MIN(xche->next->i1,
						 xe->xdf1.nrec - 1);
				if (l - xecfg->ctxlen <= e1 ||
				    get_func_line(xe, xecfg, NULL, l, e1) < 0) {
					xche = xche->next;
					goto post_context_calculation;
				}
			}
		}
#endif

		

#if 0
		if (xecfg->flags & XDL_EMIT_FUNCNAMES) {
			get_func_line(xe, xecfg, &func_line,
				      s1 - 1, funclineprev);
			funclineprev = s1 - 1;
		}
#endif
		if (!(xecfg->flags & XDL_EMIT_NO_HUNK_HDR) &&
		    xdl_emit_hunk_hdr(s1 + 1, e1 - s1, s2 + 1, e2 - s2,
				      func_line.buf, func_line.len, ecb) < 0)
			return -1;

		
		for (; s2 < xch->i2; s2++)
			if (xdl_emit_record(&xe->xdf2, s2, " ", ecb) < 0)
				return -1;

		for (s1 = xch->i1, s2 = xch->i2;; xch = xch->next) {
			
			for (; s1 < xch->i1 && s2 < xch->i2; s1++, s2++)
				if (xdl_emit_record(&xe->xdf2, s2, " ", ecb) < 0)
					return -1;

			
			for (s1 = xch->i1; s1 < xch->i1 + xch->chg1; s1++)
				if (xdl_emit_record(&xe->xdf1, s1, "-", ecb) < 0)
					return -1;

			
			for (s2 = xch->i2; s2 < xch->i2 + xch->chg2; s2++)
				if (xdl_emit_record(&xe->xdf2, s2, "+", ecb) < 0)
					return -1;

			if (xch == xche)
				break;
			s1 = xch->i1 + xch->chg1;
			s2 = xch->i2 + xch->chg2;
		}

		
		for (s2 = xche->i2 + xche->chg2; s2 < e2; s2++)
			if (xdl_emit_record(&xe->xdf2, s2, " ", ecb) < 0)
				return -1;
	}

	return 0;
}
