<!-- -*- html -*- -->
<?php
  $title = "Compatibility Notes";
  include ("header.h");
?>

<p>CC Mode 5.35 should work out of the box with Emacs &gt;= 24.5.  It has been
tested on Emacs 24.5, 25.3, 26.3, and 27.1.  It may well work on earlier
versions, and will likely work on later versions, too.  It has also been
tested on XEmacs (see below).

<p>If you want to use CC Mode on XEmacs, please download a recent repository
head of XEmacs, at least version 7190:2bbae1af16ac from Wed Nov 25 19:09:07
2020 +0000, obtainable from https://foss.heptapod.net/xemacs/xemacs via
mercurial.  You will also need at least some packages, obtainable from
https://foss.heptapod.net/xemacs/xemacs-packages.  Build XEmacs and its
packages to work together with eachother.  Alternatively, any XEmacs release
from 2021 onwards should also work.

<?php include ("footer.h"); ?>
