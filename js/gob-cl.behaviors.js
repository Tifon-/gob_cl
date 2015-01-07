(function ($) {

  Drupal.behaviors.gobClMainMenu = {
    attach: function (context, settings) {
      
      $('#gob-cl-toggle-menu').click(function(){
        var menu = $('.l-main-menu ul.menu').first();

        if ( menu.hasClass('menu-expanded') ) {
          menu.removeClass('menu-expanded');
          menu.slideUp('fast');
          $(this).removeClass('on');
        }else{
          menu.addClass('menu-expanded');
          menu.slideDown('fast');
          $(this).addClass('on');
        }
      });
    }
  };

})(jQuery);
