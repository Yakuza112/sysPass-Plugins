<main class="mdl-layout__content">
    <div id="actions">
        <form id="frmPass2fa" action="" method="post" class="form-action"
              data-onsubmit="twofa/check"
              data-plugin="Authenticator">
            <fieldset id="resetdata">
                <legend><?php echo _t('authenticator', 'Autentificación en 2 pasos'); ?></legend>
                <div class="mdl-textfield mdl-js-textfield mdl-textfield--floating-label">
                    <input id="security_pin" name="security_pin" type="text"
                           pattern="([0-9]{6}|[0-9a-f]{20})" class="mdl-textfield__input mdl-color-text--indigo-400" maxlength="20"
                           required/>
                    <label class="mdl-textfield__label"
                           for="security_pin"><?php echo _t('authenticator', 'Introducir código'); ?></label>
                </div>
                <label class="mdl-checkbox mdl-js-checkbox mdl-js-ripple-effect" for="code_reset">
                    <input type="checkbox" name="code_reset" id="code_reset" class="mdl-checkbox__input">
                    <span class="mdl-checkbox__label"><?php echo _t('authenticator', 'Olvidé mi código'); ?></span>
                </label>
                <input type="hidden" name="actionId" value="<?php echo $actionId; ?>"/>
                <input type="hidden" name="itemId" value="<?php echo $userId; ?>"/>
                <input type="hidden" name="time" value="<?php echo $time; ?>"/>
                <input type="hidden" name="sk" value=""/>
                <input type="hidden" name="isAjax" value="1"/>
            </fieldset>

            <div class="buttons">
                <button id="btnBack" type="button"
                        class="mdl-button mdl-js-button mdl-button--raised mdl-button--primary">
                    <i class="material-icons"
                       title="<?php echo _t('authenticator', 'Volver a iniciar sesión'); ?>"><?php /** @var \Theme\Icons $icons */
                        echo $icons->getIconBack()->getIcon(); ?></i>
                    <?php echo _t('authenticator', 'Volver'); ?>
                </button>

                <button id="btnLogin" class="mdl-button mdl-js-button mdl-button--raised mdl-button--primary">
                    <?php echo _t('authenticator', 'Acceder'); ?>
                    <i class="material-icons"
                       title="<?php echo _t('authenticator', 'Solicitar'); ?>"><?php echo $icons->getIconPlay()->getIcon(); ?></i>
                </button>
            </div>
        </form>
    </div>
</main>