<!-- -*- html -*- -->
<?php
  $title = "Anonymous CVS access";
  include ("header.h");
?>

<p>The current CC Mode development version is always available through
anonymous CVS.  Being under development, there's of course not any
guarantees that it will work well, or at all.  That said, it usually
works well, maybe even better than the last release since bug fixes
get into it first.

<p>You're welcome to report bugs, opinions and patches regarding the
development version.  It's very likely that pilot error questions go
by unanswered, however.

<h3>Checking out the CVS tree</h3>

<ol>

  <li><code>cvs&nbsp;-d:pserver:anonymous@cvs.cc-mode.sourceforge.net:/cvsroot/cc-mode&nbsp;login</code><br />
  Just press Enter at the password prompt.

  <li><code>cvs&nbsp;-z3&nbsp;-d:pserver:anonymous@cvs.cc-mode.sourceforge.net:/cvsroot/cc-mode&nbsp;co&nbsp;cc-mode</code>

</ol>

<p>The CC Mode source will be in the root of the checked out tree.
You'll find the regression test suite in the <code>tests</code>
directory; take a look in <code>000tests.el</code> to figure out how
to use it.  The <code>admin</code> directory contains the source for
this web site, which probably isn't very interesting.

<?php include ("footer.h"); ?>
