///////////////////////////////////////////////////////////////////////
/// Copyright (c) 1988-2021 $organization$
///
/// This software is provided by the author and contributors ``as is'' 
/// and any express or implied warranties, including, but not limited to, 
/// the implied warranties of merchantability and fitness for a particular 
/// purpose are disclaimed. In no event shall the author or contributors 
/// be liable for any direct, indirect, incidental, special, exemplary, 
/// or consequential damages (including, but not limited to, procurement 
/// of substitute goods or services; loss of use, data, or profits; or 
/// business interruption) however caused and on any theory of liability, 
/// whether in contract, strict liability, or tort (including negligence 
/// or otherwise) arising in any way out of the use of this software, 
/// even if advised of the possibility of such damage.
///
///   File: main_opt.hpp
///
/// Author: $author$
///   Date: 8/2/2021
///////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_CRONO_MAIN_OPT_HPP
#define XOS_APP_CONSOLE_CRONO_MAIN_OPT_HPP

#include "xos/app/console/version/main.hpp"
#include "xos/lib/crono/version.hpp"

namespace xos {
namespace app {
namespace console {
namespace crono {

/// class main_optt
template <class TExtends = version::maint<lib::crono::version>, class TImplements = typename TExtends::implements>
class exported main_optt: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef main_optt derives;

    typedef typename extends::file_t file_t;
    typedef typename extends::string_t string_t;
    typedef typename extends::char_t char_t;
    typedef typename extends::end_char_t end_char_t;
    enum { end_char = extends::end_char };

    /// constructor / destructor
    main_optt() {
    }
    virtual ~main_optt() {
    }
private:
    main_optt(const main_optt& copy) {
        throw xos::exception(exception_unexpected);
    }

protected:
}; /// class main_optt
typedef main_optt<> main_opt;

} /// namespace crono
} /// namespace console
} /// namespace app
} /// namespace xos

#endif /// XOS_APP_CONSOLE_CRONO_MAIN_OPT_HPP
