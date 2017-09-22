namespace Dmustache;

class Dmustache {
  
  private static templates = [];
  
  public static function add(string file) -> boolean {
    if file_exists(file) {
      self::templates[] = file;
      return true;
    }
    
    return false;
  }
  
  
  public static function say() {
    echo "hi :)";
  }
  
}
