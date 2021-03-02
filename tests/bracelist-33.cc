struct line_t;
struct point_t;
void set_line(line_t);

set_line(line_t(point_t(0.4, 0.2),
                point_t(0.2, 0.5)));
set_line(line_t{point_t{0.4, 0.2},
                point_t{0.2, 0.5}});
// The following could do with improvemnt (2018-09-19).
set_line(line_t{
        point_t{0.4, 0.2},
        point_t{0.2, 0.5}
    });
// Local Variables:
// c-file-offsets: ((brace-list-intro . (first c-lineup-2nd-brace-entry-in-arglist c-lineup-class-decl-init-+ +)))
// End:
