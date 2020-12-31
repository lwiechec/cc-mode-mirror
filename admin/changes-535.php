<!-- -*- html -*- -->
<?php
  $title = "Changes for CC Mode 5.35";
  $menufiles = array ("links.h", "changelinks.h");
  include ("header.h");
?>

<p>See also the <a href="changes-534.php">user visible changes for
5.34</a>.</p>

<p><a
href="http://sourceforge.net/projects/cc-mode/files/cc-mode/5.35/cc-mode-5.35.tar.gz/download">Download</a>
this CC Mode version.</p>

<p>This version contains a few mainly minor new features, significant internal
improvements and many bug fixes.</p>

<ul>
  <p><li> The minimum version of Emacs supported is still 24.5.  XEmacs users
      should obtain a reasonably new repository version of XEmacs from
      https://foss.heptapod.net/xemacs/xemacs and of required packages from
      https://foss.heptapod.net/xemacs/xemacs-packages via mercurial and build
      them to work with eachother.  This ensures important bug fixes are
      present.
      <br>Despite the cessation of active development of XEmacs, CC Mode
      continues to support it.</p>

  <p><li>Optimizations have been added for large buffers with few braces
    (e.g. .h files with only #defines) and for those with very large brace
    blocks.</p>
  
  <p><li>Several facilities from GAWK 4 (including the switch statement) have
    been implemented in AWK Mode.</p>

  <p><li>Support for Doxygen documentation style has been added.</p>

  <p><li>Specified preprocessor directives (e.g. #pragma) can now be indented
    as though they were statements.  To use, set up the customizable variable
    <code>c-indent-to-body-directives</code>, and
    call <code>c-toggle-cpp-indent-to-body</code>.</p>

  <p><li>The ability to recognize Objective-C Mode method names has been
      added.  E.g. for Imenu.</p>

  <p><li>"Wrong" style comments can now be fontified with
      <code>font-lock-warning-face</code>.  These are block comments when the
      default style is line comments and vice-versa.  To enable, set (or
      customize) the variable <code>c-mark-wrong-style-of-comment</code>.</p>

  <p><li>C++ Mode attributes have been implemented.</p>

  <p><li>Bogusly "adjacent" double quotes can now pair up syntactically.  So,
      e.g. <code>C-M-f</code> will move from one unterminated double quote
      mark to another one, even though there is an unescaped newline between
      them.</p>

  <p><li>Many bugs have been fixed.</p>

</ul>

<?php include ("footer.h"); ?>
