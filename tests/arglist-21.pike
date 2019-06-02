void f() {
    rx = Rx.Rx (Rx.or (@map (lambda (int alt) {
				 return Rx.save (({sub, 'b' + alt}));
			     },
		// Awkward case.  What to do here?
		reverse (indices (allocate (alts))))));
}

// Local Variables:
// c-file-offsets: ((inlambda . c-lineup-inexpr-block))
// End: