<!-- -*- html -*- -->
<?php
  $title = "Changes for CC Mode 5.34";
  $menufiles = array ("links.h", "changelinks.h");
  include ("header.h");
?>

<p>See also the <a href="changes-533.php">user visible changes for
5.33</a>.</p>

<p><a
href="http://sourceforge.net/projects/cc-mode/files/cc-mode/5.34/cc-mode-5.34.tar.gz/download">Download</a>
this CC Mode version.</p>

<p>This version contains a few mainly minor new features, significant internal
improvements and many bug fixes.</p>

<ul>

  <p><li>Emacs 23 is no longer supported, although CC Mode might well still
      work with it.
      <br>The minimum versions supported are Emacs 24.5 and the latest
      version of XEmacs 21.5.
      <br>Please note that due to the cessation of active development of
      XEmacs, CC Mode 5.34 might well be the last version to support XEmacs at
      all.</p>

  <p><li>The now redundant file cc-fix.el has been removed.</p>

  <p><li>It is intended that C++14 is fully supported.  In particular, C++
     digit separators work.  Some features of C++17 are also supported.</p>

  <p><li>There are two new command bindings:
      <ul>
        <li>c-toggle-comment-style, bound by default to C-c C-k, switches the
          default comment style (i.e., that inserted by M-;) between block
          comments and line comments.
        <li>c-display-defun-name is now bound by default to C-c C-z.
      </ul></p>

  <p><li>Emacs's electric-pair-mode should now work together with CC Mode.</p>

  <p><li>Modes derived from CC Mode can now use single quotes to delimit
      strings.  To activate this, set the lang-const
      `c-single-quotes-quote-strings' for the derived mode in cc-langs.el.</p>

  <p><li>The new "mode" c-or-c++-mode selects either C Mode or C++ Mode for .h
      files, depending on their contents.  To disable this, add an entry for
      .h to auto-mode-alist (see page "Choosing Modes" in the Emacs
      manual).</p>

  <p><li>Some optimizations, particularly for C++ Mode, have been
  implemented.</p>

  <p><li>For consistency with the syntactic symbol 'statement', source lines
    with syntax 'brace-list-entry' are now anchored on the preceding such line
    rather than the first such line.</p>

  <p><li>Many bugs have been fixed.</p>

</ul>

<?php include ("footer.h"); ?>
