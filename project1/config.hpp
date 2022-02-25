/*!
 * \file
 * \brief Файл конфигурации.
 * \author Кирилл Пушкарёв
 */
#ifndef CONFIG
#define CONFIG

#include <QtGlobal> // QT_TRANSLATE_NOOP

namespace Config
{

/*!
 * \brief Название приложения.
 * \note QT_TRANSLATE_NOOP() используется, чтобы строки отображались в файле
 * строк для перевода на другие языки в контексте Config.
 */
const char applicationName[] = QT_TRANSLATE_NOOP("Config", "Cryption");

//! Версия приложения
const char applicationVersion[] = "20210627";

}
#endif // CONFIG

