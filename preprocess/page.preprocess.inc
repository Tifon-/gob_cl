<?php

/**
 * @file
 * Contains a pre-process hook for 'page'.
 */

/**
 * Override or insert variables into the page template.
 */
function gob_cl_preprocess_page(&$variables) {
  // You can use preprocess hooks to modify the variables before they are passed
  // Header Image
  if ( theme_get_setting('gob_cl_header_image_default', 'gob_cl') ) {
    // Use default image
    $variables['header_image_path'] = drupal_get_path('theme', 'gob_cl') . '/images/gob_cl_header_image.gif';
  }
  else{
    // use custom image
    dpm(theme_get_setting('gob_cl_header_image_path', 'gob_cl'));
    $variables['header_image_path'] = file_create_url( theme_get_setting('gob_cl_header_image_path', 'gob_cl'));
  }  
  
}